/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function(char) {
    const mp = {};
    
    for(let i=0; i<char.length; i++){
        if(!mp[char[i]]){
            mp[char[i]] = 1;
        }else {
            mp[char[i]]++;
        }
    }
    let  ch = '';
   for (const key in mp) {
       if(mp[key] > 1){
        ch += key + mp[key];
       } else {
        ch += key;
       }
    }


    return ch.split('');
};
const val = compress(["a","a","b","b","c","c","c"]);
console.log(val);