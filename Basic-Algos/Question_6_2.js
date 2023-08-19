function findMissing(arr) {
    const N = arr.length; // Total number of elements in the array
    const presence = new Array(N + 1).fill(0); // Array to track presence of numbers
  
    // Mark presence of numbers in the array
    for (const num of arr) {
      presence[num - 1] = 1;
    }
  
    // Find the first missing number
    const missingNumber = presence.findIndex(val => val === 0) + 1;
  
    console.log("The missing number is:", missingNumber);
  }
  
  // Driver code
  const numbers = [
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, /* Missing number */ 46
  ];
  
  findMissing(numbers);
  