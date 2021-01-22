int maxFraction(std::vector<int> numerators, std::vector<int> denominators)
{
    int cs = 0;
    for( int i = 1; i < numerators.size(); i++)
    {
        if (numerators[cs] * denominators[i] < numerators[i] * denominators[cs])
        {
            cs = i;
        }
    }
    return cs;
}
