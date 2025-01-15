// Factorial Calculating Function
long long findFactorial(long long user_input, long long factorial)
{
    if (user_input < 1)
    {
        return factorial;
    }
    factorial *= user_input;
    user_input--;
    return findFactorial(user_input, factorial);
}