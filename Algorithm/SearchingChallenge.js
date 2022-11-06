//created by Ali SOYLU

function SearchingChallenge(str) {

  const words = str.split(" ");
  var maxlet = 0;
  let maxSen = "There are no words that repeat letters"

  for (i = 0; i < words.length; i++) {

    for (j = 0; j < words[i].length; j++) {

      //Harf Kelimenin içinde kaç kere tekrarlanmıştır 
      var c = words[i].split(words[i].charAt(j)).length - 1;


      if (maxlet < c - 1) {
        maxlet = c;
        maxSen = words[i];
      }


    }


  }
  //console.log(maxlet);
  //console.log(maxSen);
  return maxSen;

}

// keep this function call here
var temp="Hello world"
console.log(SearchingChallenge(temp));
