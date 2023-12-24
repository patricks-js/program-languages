function filter(arr, callback) {
  const newArr = []

  for(let i = 0; i < arr.length; i++) {
    let trueCase = callback(arr[i]) 

    if(trueCase) {
      newArr.push(arr[i])
    }
  }

  return newArr
}

const arr = ["Home", "Dog", "Museum", "Seat", "Jesus", "English"]

const res = filter(arr, (item) => item.includes("o"))

console.log(res)
