
/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//First, check if is any of the common types:
if(Fireball* ptr = dynamic_cast<Fireball*>(spell)) {
   // Spell was safely casted to Fireball
   ptr->revealFirepower();
}else if(Frostbite* ptr = dynamic_cast<Frostbite*>(spell)) {
   ptr->revealFrostpower();
}else if(Thunderstorm* ptr = dynamic_cast<Thunderstorm*>(spell)) {
   ptr->revealThunderpower();
}else if(Waterbolt* ptr = dynamic_cast<Waterbolt*>(spell)) {
   ptr->revealWaterpower();
}else{
    // Here we have to check the journal, and look for the LCS
    // the LCS uses dynamic programming, I saw it on the web somewhere
    string spl = spell->revealScrollName();
    string jornal = SpellJournal::journal;
    int m = jornal.length()+1;
    int n = spl.length()+1;    
    vector < vector<int> > vec(m, vector<int>(n));
    for(auto f = 1; f < m; ++f){
        for(auto c = 1 ; c < n ; ++c){
            if(spl[c-1] == jornal[f-1])
                vec[f][c] = vec[f-1][c-1] + 1;
            else{
                if(vec[f][c-1] > vec[f-1][c])
                    vec[f][c] = vec[f][c-1];
                else
                    vec[f][c] = vec[f-1][c];
            }
        }
    }        
    cout << vec[m-1][n-1] << endl;
}