const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];

// Parametros do map: callback
// Parametros do callback: cada item do array e o index do item

function map(arr, callback) {
  let result = [];

  for (let i = 0; i < arr.length; i++) {
    result.push(callback(arr[i], i));
  }

  return result;
}

const res = map(arr, (item) => item++);

console.log(res);
