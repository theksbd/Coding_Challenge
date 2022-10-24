// success
// https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/javascript
function isPangram(string) {
  let char = [];
  for (let i = "a".charCodeAt(0); i <= "z".charCodeAt(0); i++) {
    char.push(String.fromCharCode(i));
  }
  string = string.toLowerCase();
  return char.every((c) => {
    return string.includes(c);
  });
}

console.log(isPangram("asdw"));
