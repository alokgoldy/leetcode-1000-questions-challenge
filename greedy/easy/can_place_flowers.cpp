/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function(flowerbed, n) {


    for(let i = 0; i< flowerbed.length; i++){
        const left = i === 0 || flowerbed[i-1] === 0;
        const right = i === flowerbed.length - 1 || flowerbed[i + 1] === 0;

        if(left && right && flowerbed[i] === 0){
            flowerbed[i] = 1;
            n--;
        }
    }
    return n <=0;
    // for(let i = 0; i< flowerbed.length; i++){
    //     const left = i === 0 || flowerbed[i - 1] === 0;
    //     const right = i === flowerbed.length - 1 || flowerbed[i+1] === 0;

    //     if(left && right && flowerbed[i] === 0){
    //         flowerbed[i] = 1;
    //         n--;
    //     }
    // }
    // return n <= 0;
};

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            bool left = i == 0 || flowerbed[i - 1] == 0;
            bool right = i == flowerbed.size() - 1 || flowerbed[i + 1] == 0;
            
            if (left && right && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return n <= 0;        
    }
};