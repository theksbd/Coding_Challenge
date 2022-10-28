// success
// https://www.codewars.com/kata/52449b062fb80683ec000024/train/javascript
function generateHashtag(str) {
  str = str.trim();
  if (str === "") {
    return false;
  }
  let res = "#";
  const words = str.split(" ");
  words.forEach((word) => {
    word = word.slice(0, 1).toUpperCase() + word.slice(1);
    res += word;
  });
  if (res.length > 140) {
    return false;
  }
  return res;
}

console.log(generateHashtag("Udemy course costs nearly 100k"));
