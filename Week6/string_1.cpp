void recursive(string &s, int i)
{
    int n = s.length();
    if (i == n / 2)
        return;
    swap(s[i], s[n - i - 1]);
    recursive(s, i + 1);
}

int main()
{
   string s="Shashwat";
   recursive(s,0);
   cout<<s;
   return 0;
  } 