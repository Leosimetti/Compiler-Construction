var temp := [0, 0, 0]
var new := []; // empty array declaration
var array := temp + new
print ("Array before insertion : ");
for i in array
    loop
        print i;
    end

// adding elements
array[4] := 55.5;
array[5] := 7*9;
array[6] := "experience";
array[7] := [5, 4];

print ("Array after insertion : ") ;
for i in array
    loop
        print i;
    end  