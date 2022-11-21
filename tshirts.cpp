#include <iostream>
#include <assert.h>

/**************************
@Name: isvalidSize
@Description: Function added to test the validity of the input size. 
             The valid values were assumed to be beetween 32 and 48
@parameter: size
@return value: bool
**************************/
bool isValidSize(int size)
{
    bool isValid = false;
    if(size >= 32 && size <=48 )
    {
        isValid = true;
    }
    return isValid;
}

char size(int cms) {
    char sizeName = '\0';
    //I assumed sizes 38 and 42 are medium
    if(isValidSize(cms))
    {
        if(cms < 38) {
            sizeName = 'S';
        } else if(cms >= 38 && cms <= 42) {
            sizeName = 'M';
        } else if(cms > 42) {
            sizeName = 'L';
        }
    }
    return sizeName;
}

int main() {
    //Checking invalid values
    assert(size(10) == '\0');
    assert(size(-5) == '\0');
    //Testing range of valid values
    assert(size(32) == 'S');
    assert(size(37) == 'S');
    assert(size(38) == 'M');
    assert(size(40) == 'M');
    assert(size(42) == 'M');
    assert(size(43) == 'L');
    assert(size(48) == 'L');
    std::cout << "All is well\n";
    return 0;
}
