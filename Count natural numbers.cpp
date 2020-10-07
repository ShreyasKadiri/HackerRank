/*
Given an input integer n, count natural numbers in range [1, n] whose all permutations are greater than or equal to the number itself.
*/

int CountNaturalNumber(int n)
{
    int finalAnswer = 0;
 
    for (int i = 1; i <= 9; i++)
    {
        std::stack<int> myStack;
        if (i <= n)
        {
            myStack.push(i);
            finalAnswer++;
        }
 
        while (!myStack.empty())
        {
            int topElement = myStack.top();
            myStack.pop();
            for (int j = topElement%10; j <= 9; j++)
            {
                int x = topElement*10 + j;
                if (x <= n)
                {
                    myStack.push(x);
                    finalAnswer++;
                }
            }
        }
    }
 
    return finalAnswer;
}
