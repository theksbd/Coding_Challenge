// success
// https://www.hackerrank.com/challenges/funny-string/problem?isFullScreen=true

function funnyString(s) {
  // Write your code here
  const len = s.length;
  for (let i = 0; i < len / 2; i++) {
    const diff1 = Math.abs(s.charCodeAt(i + 1) - s.charCodeAt(i));
    const diff2 = Math.abs(
      s.charCodeAt(len - i - 2) - s.charCodeAt(len - i - 1)
    );
    if (diff1 !== diff2) {
      return 'Not Funny';
    }
  }
  return 'Funny';
}

console.log(funnyString('lmnop'));
console.log(funnyString('acxz'));
console.log(funnyString('ivvkxq'));
console.log(funnyString('ivvkx'));
