func StringChallenge(_ str: String) -> Int {

  // code goes here   
  // Note: feel free to modify the return type of this function 
  // Swift vowel finder

  var count = 0
  let vowel = ["a","e","i","o","u"]
  //my words 
  //print(str)
  for ch in str {
     
    if(vowel.contains("\(ch)")){
      count = count + 1
    }

  }

  return count

}

// keep this function call here   
print(StringChallenge(readLine(stripNewline: true)));
