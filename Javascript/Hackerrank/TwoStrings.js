// success
// www.hackerrank.com/challenges/two-strings/problem?isFullScreen=true

function twoStrings(s1, s2) {
  // Write your code here
  const set1 = new Set(s1.split(''));
  for (const key of s2) {
    if (set1.has(key)) {
      return 'YES';
    }
  }
  return 'NO';
}

console.log(twoStrings('hello', 'world'));
