class Solution {
public:
    bool isValid(string s) {
       char array[s.length()]; 
       int top = -1;
       for(int i = 0; i < s.length(); i++)
       {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            top++;
            array[top] = s[i];
        }
            if(s[i] == ')')
            {
                if(top == -1)
                {
                    return false;
                }
                else if( array[top] == '(')
                {
                    top--;
                }
                else 
                {
                    return false;
                }
            }
            if(s[i] == ']')
            {
                if(top == -1)
                {
                    return false;
                }
                else if(array[top] == '[')
                {
                    top--;
                }
                else 
                {
                    return false;
                }
            }
            if(s[i] == '}')
            {
                if(top == -1)
                {
                    return false;
                }
                else if(array[top] == '{')
                {
                    top--;
                }
                else
                {
                    return false;
                }
            }
       }
       if (top == -1)
       {
            return true;
       }
       else
       {
            return false;
        }
}
};