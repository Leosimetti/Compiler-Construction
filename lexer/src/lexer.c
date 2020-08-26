#include "include/lexer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

lexer_T* init_lexer(char* contents){

	lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
	lexer->contents = contents;
	lexer->i = 0;
	lexer->c = contents[lexer->i];

	return lexer;
}

// function to pass the lexer state in
void lexer_advance(lexer_T* lexer){

	if (lexer->c != '\0' && lexer->i < strlen(lexer->contents)){
		lexer->i += 1;
		lexer->c = lexer->contents[lexer->i];
	}
}

void lexer_skip_whitespace(lexer_T* lexer){

	while (lexer-> c == ' ' || lexer-> c == 10){
		lexer_advance(lexer);
	}
}

char* lexer_get_current_char_as_string(lexer_T* lexer){
	char* str = calloc(2, sizeof(char));
    str[0] = lexer->c;
    str[1] = '\0';

    return str;

}

token_T* lexer_advance_with_token(lexer_T* lexer, token_T* token){
	lexer_advance(lexer);

	return token;
}

token_T* lexer_collect_id(lexer_T* lexer){

	char* value = calloc(1, sizeof(char));

	while(isalnum(lexer->c)){
		char* s = lexer_get_current_char_as_string(lexer);
		value = realloc(value, (strlen(value) + strlen(s) + 1) + sizeof(char));
		strcat(value, s);

		lexer_advance(lexer);
	}

	return init_token(TOKEN_ID, value);
}

token_T* lexer_collect_equals(lexer_T* lexer){
	char* value = ":=";
	lexer_advance(lexer);
	lexer_advance(lexer);

	return init_token(TOKEN_EQUALS, value);
}

token_T* lexer_collect_string(lexer_T* lexer){
	lexer_advance(lexer);

	char* value = calloc(1, sizeof(char));

	while(lexer->c != '"'){
		char* s = lexer_get_current_char_as_string(lexer);
		value = realloc(value, (strlen(value) + strlen(s) + 1) + sizeof(char));
		strcat(value, s);

		lexer_advance(lexer);
	}

	lexer_advance(lexer);

	return init_token(TOKEN_STRING, value);
}

token_T* lexer_get_next_token(lexer_T* lexer){

	while(lexer->c != '\0' && lexer->i < strlen(lexer->contents)){
		if (lexer-> c == ' ' || lexer-> c == 10){

			lexer_skip_whitespace(lexer);
		}
		if (isalnum(lexer->c))
            return lexer_collect_id(lexer);
		if(lexer->c == '"'){
			return lexer_collect_string(lexer);
		}
		if (lexer-> c == ':'){
			return lexer_collect_equals(lexer);

		}
		switch(lexer->c){
            case ';': return lexer_advance_with_token(lexer, init_token(TOKEN_SEMI, lexer_get_current_char_as_string(lexer))); break;
            case '(': return lexer_advance_with_token(lexer, init_token(TOKEN_LPARENT, lexer_get_current_char_as_string(lexer))); break;
            case ')': return lexer_advance_with_token(lexer, init_token(TOKEN_RPARENT, lexer_get_current_char_as_string(lexer))); break;

            case '+': return lexer_advance_with_token(lexer, init_token(TOKEN_PLUS, lexer_get_current_char_as_string(lexer))); break;
			case '-': return lexer_advance_with_token(lexer, init_token(TOKEN_MINUS, lexer_get_current_char_as_string(lexer))); break;
			case '*': return lexer_advance_with_token(lexer, init_token(TOKEN_MULT, lexer_get_current_char_as_string(lexer))); break;

			case ']': return lexer_advance_with_token(lexer, init_token(TOKEN_RBRACE, lexer_get_current_char_as_string(lexer))); break;
			case '[': return lexer_advance_with_token(lexer, init_token(TOKEN_LBRACE, lexer_get_current_char_as_string(lexer))); break;
			case '}': return lexer_advance_with_token(lexer, init_token(TOKEN_RCBRACE, lexer_get_current_char_as_string(lexer))); break;
			case '{': return lexer_advance_with_token(lexer, init_token(TOKEN_LCBRACE, lexer_get_current_char_as_string(lexer))); break;

			case '<': return lexer_advance_with_token(lexer, init_token(TOKEN_LESS, lexer_get_current_char_as_string(lexer))); break;
			case '>': return lexer_advance_with_token(lexer, init_token(TOKEN_MORE, lexer_get_current_char_as_string(lexer))); break;
		}
	}
	return (void*)0;
}





