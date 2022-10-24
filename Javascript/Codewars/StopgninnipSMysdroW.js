// success
// https://www.codewars.com/kata/5264d2b162488dc400000001/train/javascript
function spinWords(string) {
  //TODO Have fun :)
  const words = string.split(" ");
  let result = "";
  const newWords = words.map((word) => {
    if (word.length >= 5) {
      let newString = "";
      for (let i = word.length - 1; i >= 0; i--) {
        newString += word[i];
      }
      return newString;
    }
    return word;
  });
  result = newWords.join(" ");
  return result;
}

console.log(spinWords("object"));
