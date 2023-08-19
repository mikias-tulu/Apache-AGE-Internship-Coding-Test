// Function to check if a word is a palindrome
function isPalindrome(word) {
    // Convert the word to an array of characters, reverse it, and then join them back into a string
    return word === word.split('').reverse().join('');
}

// Function to process user input
function processInput() {
    // Prompt the user to enter a word
    const user_input = prompt("Enter a word:");
    
    // Check if the entered word is a palindrome
    if (isPalindrome(user_input)) {
        console.log("The word is a palindrome.");
    } else {
        // Convert the entered word to an array of characters, reverse it, and then join them back into a string
        const reversed_word = user_input.split('').reverse().join('');
        console.log("The word is not a palindrome. Reversed:", reversed_word);
    }
}

// Call the function to start the processing
processInput();
