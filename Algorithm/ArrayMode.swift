/*Have the function ArrayChallenge(arr) take the array of numbers stored in arr and return the number that appears most frequently (the mode). For example: if arr contains [10, 4, 5, 2, 4] the output should be 4. If there is more than one mode return the one that appeared in the array first (ie. [5, 10, 10, 6, 5] should return 5 because it appeared first). If there is no mode return -1. The array will not be empty.*/



func ArrayChallenge(_ arr: [Int]) -> Int {

  // code goes here   
  // Note: feel free to modify the return type of this function 
  var highest = 1;
  var mostFrequently = -1;
  
  for i in arr{
  var count=0
  for j in arr{
  
  if ( i == j ) {
  count = count + 1;
  }
  
  }

  if ( count > highest ) {
  highest = count;
  mostFrequently = i;
  }

    
  }

  return mostFrequently

}

// keep this function call here   
print(ArrayChallenge(readLine(stripNewline: true)));
