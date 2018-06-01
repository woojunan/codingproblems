int romanToInt(char* s) {
    int nums[strlen(s)];
    int i = 0;
    int result = 0;
    for(i; i < strlen(s); i++) {
        switch(s[i]) {
            case 'M':
                nums[i] = 1000;
                break;
                
            case 'D':
                nums[i] = 500;
                break;
                
            case 'C':
                nums[i] = 100;
                break;
                
            case 'L':
                nums[i] = 50;
                break;
            
            case 'X':
                nums[i] = 10;
                break;
                
            case 'V':
                nums[i] = 5;
                break;
                
            case 'I':
                nums[i] = 1;
                break;
        }
    }
    int j = 0;
    for(j; j < strlen(s) - 1; j++) {
        if(nums[j + 1] > nums[j]) {
            result -= nums[j]; 
        }
        else {
            result += nums[j];
        }
    }
    return result + nums[strlen(s) - 1];
}