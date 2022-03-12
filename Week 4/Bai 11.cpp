string pigLatin(string word)
{
    if(word[0]=='u'||word[0]=='e'||word[0]=='o'||word[0]=='a'||word[0]=='i')
    {
        word += "way";
    }
    else
    {
        char s = word[0];
        word.erase(0,1);
        word += s;
        word += "ay";
    }
    return word;
}
