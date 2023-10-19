int countDigits(int n) {
    int count = 0;   // Initialize a count variable to keep track of the digits that evenly divide n.
    int temp = n;    // Create a temporary variable to avoid modifying the original n.

    while (temp > 0) {
        int digit = temp % 10;  // Extract the last digit of temp.
        if (digit != 0 && n % digit == 0) {
            count++;   // If the digit evenly divides n, increment the count.
        }
        temp /= 10;  // Remove the last digit from temp by integer division (moving to the next digit).
    }

    return count;  // Return the count of digits that evenly divide n.
}
