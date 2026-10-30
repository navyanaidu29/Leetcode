class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        answer.reserve(n); // Optional: pre-allocate memory for better performance
        
        for (int i = 1; i <= n; i++) {
            bool divBy3 = (i % 3 == 0);
            bool divBy5 = (i % 5 == 0);
            
            if (divBy3 && divBy5) {
                answer.push_back("FizzBuzz");
            } else if (divBy3) {
                answer.push_back("Fizz");
            } else if (divBy5) {
                answer.push_back("Buzz");
            } else {
                answer.push_back(to_string(i));
            }
        }
        
        return answer;
    }
};
    