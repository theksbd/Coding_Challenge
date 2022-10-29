// success
// https://www.codewars.com/kata/58d76854024c72c3e20000de/train/javascript
function reverse(str) {
  //WRITE SOME MAGIC
  let res = [];
  str = str.trim();
  const words = str.split(" ").filter(Boolean);
  for (let i = 0; i < words.length; i++) {
    let word = words[i];
    if (i & 1) {
      word = word.split("").reverse().join("");
    }
    res.push(word);
  }
  return res.join(" ");
}

console.log(reverse("I really don't like reversing strings!"));
