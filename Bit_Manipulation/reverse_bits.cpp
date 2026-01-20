q link: https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    int reverseBits(int n) {
        int x=0;
        //pop out last bit, add at start. repeat 32 times
        for(int i=31;i>=0;i--){

            int temp=n&1;
            temp<<=i;
            x|=temp;
            n>>=1;
                       
        }  

        return x;      
    }
};


var reverseBits = function(n) {
    let x=0;
    //pop out last bit, add at start. repeat 32 times
    for(let i=31;i>=0;i--){

        let temp=n&1;
        temp<<=i;
        x|=temp;
        n>>=1;
                       
    }  

    return x;      
};