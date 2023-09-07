/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var ans =[];
    arr.map((el,i)=>{
        if(fn(el,i)){
            ans.push(arr[i]);
        }
    })
    
    return ans;
};