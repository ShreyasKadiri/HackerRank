int FindMaxSum(List<Integer> jars)
{
    if (jars.size()== 0) {
        return 0;
    }
    int include = jars.get(0);
    int exclude = 0;
    int exclNew;
    int i;
 
    for (i = 1; i < jars.size(); i++)
    {
        exclNew = (include > exclude) ? include : exclude;
 
        include = exclude + jars.get(i);
        exclude = exclNew;
    }
 
    return ((include > exclude) ? include : exclude);
}
