#include <iostream>
#include <string>

std::string DNAtoRNA(std::string dna)
{
    std::string rna = "";
    for (std::string::size_type i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'T')
        {
            rna += 'U';
        }
        else
        {
            rna += dna[i];
        }
    }
    return rna;
}
