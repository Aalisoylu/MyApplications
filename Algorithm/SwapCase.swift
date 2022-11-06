/*
Have the function StringChallenge(str) take the str parameter and swap the case of each character. For example: if str is "Hello World" the output should be hELLO wORLD. Let numbers and symbols stay the way they are.
*/

/*

StringChallenge(str) işlevinin str parametresini almasını ve her karakterin büyük/küçük harflerini değiştirmesini sağlayın. Örneğin: str "Merhaba Dünya" ise çıktı merhaba DÜNYA olmalıdır. Sayılar ve semboller oldukları gibi kalsın.

*/



func StringChallenge(_ str: String) -> String {

  // code goes here   
  // Note: feel free to modify the return type of this function 
   var result = ""
    for i in str { 
        let s = String(i)
        let lo = s.lowercased() 
        let up = s.uppercased() 
        result += (s == lo) ? up : lo
        
    }
  
  return result

}

// keep this function call here   
print(StringChallenge(readLine(stripNewline: true)));


