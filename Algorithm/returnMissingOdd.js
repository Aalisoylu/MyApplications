/*
Missing odd numbers

Input: 9,7,5
Output: 3
*/


var returnMissingOdd = function(nums) {

    // Insert your code here
    let sortednums =nums.sort((a,b) => a - b);

    for(var i=0; i<sortednums.length; i++){
        if(sortednums[i]+2 != sortednums[i+1]){
            return sortednums[i]+2
        }
    }
};

var r= returnMissingOdd([9,7,5]);
console.log(r);


