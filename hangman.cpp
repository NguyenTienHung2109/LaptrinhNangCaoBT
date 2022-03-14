#include<bits/stdc++.h>
using namespace std;
string secretWords()
{
    string WORD_LIST[] =
    {
        "angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry", "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
    };
    const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);
    srand(time(NULL));
    return WORD_LIST[rand()%WORD_COUNT];
}
void DRAW_HANGMAN(int BAD_GUESS)
{
    const string FIGURE[] =
    {
        " ------------- \n"
        " | \n"
        " | \n"
        " | \n"
        " | \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " | \n"
        " | \n"
        " | \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " |  O \n"
        " | \n"
        " | \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " |  O \n"
        " |  | \n"
        " | \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " |  O \n"
        " | /| \n"
        " | \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " |  O \n"
        " | /|\\ \n"
        " | \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " |  O \n"
        " | /|\\ \n"
        " | / \n"
        " | \n"
        " ----- \n",
        " ------------- \n"
        " |  | \n"
        " |  O \n"
        " | /|\\ \n"
        " | / \\ \n"
        " | \n"
        " ----- \n",
    };
    cout << FIGURE[BAD_GUESS];

}
const int MAGIC_NUMBER = 7;

int CORRECT_CHAR[100];
void Play()
{
    string GUESS_WORD,BI_MAT = secretWords();
    for(int i=0; i<BI_MAT.length(); i++)
    {
        GUESS_WORD[i]='_';
    }
    int NUMBER_OF_GUESS = 0, COUNT_CHAR=0;
    string GUESS_CHARACTER;
    cout << BI_MAT <<'\n';
    for(int i=0; i<BI_MAT.length(); i++)
    {
        cout<<GUESS_WORD[i]<< " ";
    }
    cout <<'\n';
    for(int i=0; i < 200; i++)
        CORRECT_CHAR[i] = 0;
    while(NUMBER_OF_GUESS < MAGIC_NUMBER && COUNT_CHAR < BI_MAT.length())
    {
        char GUESS_CHARACTER;
        bool CHECK = false;
        cin >> GUESS_CHARACTER;
        if(CORRECT_CHAR[GUESS_CHARACTER] == 1)
        {
            //cout<<CORRECT_CHAR[GUESS_CHARACTER]<<" ";
            cout<<"This letter was chosen!"<<'\n';
        }
        else
        {
            for(int i=0; i<BI_MAT.length(); i++)
            {
                if(GUESS_CHARACTER == BI_MAT[i])
                {
                    COUNT_CHAR++;
                    GUESS_WORD[i] = BI_MAT[i];
                    CHECK = true;
                    CORRECT_CHAR[GUESS_CHARACTER] = 1;
                }
            }
            if(CHECK)
            {
                //cout << "YOU'RE CORRECT!"<<'\n';
                for(int i=0; i<BI_MAT.length(); i++)
                {
                    cout<<GUESS_WORD[i]<< " ";
                }
                cout<<'\n';
            }
            else
            {
                NUMBER_OF_GUESS ++;
                //cout<< "BETTER LUCK NEXT TIME!";
                cout << GUESS_WORD <<'\n';
                DRAW_HANGMAN(NUMBER_OF_GUESS);
            }
        }
        cout << "Number of wrong guesses: " << NUMBER_OF_GUESS << '\n';
        cout << "Your guess: " << GUESS_CHARACTER<<'\n';
    }
    if (NUMBER_OF_GUESS < 7) cout << "Congratulations! You win!";
    else cout << "You lost. The correct word is " << BI_MAT;
}

int main()
{
    Play();
}
