/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */

// O(n²)
var twoSum = function (numbers, target) {
  for (let i = 0; i < numbers.length; i++) {
    for (let j = 0; j < numbers.length; j++) {
      if (i === j) continue;
      if (numbers[i] + numbers[j] === target) {
        return [i, j];
      }
    }
  }
};

const arr = [-1, -2, -3, -4, -5];
const target = -8;

const res = twoSum(arr, target);
console.log(res);
