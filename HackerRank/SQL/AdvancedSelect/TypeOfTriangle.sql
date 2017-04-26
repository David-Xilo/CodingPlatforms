/*
Enter your query here.
*/
select
    case
        when (A + B <= C) or (B + C < A) or (C + A <= B) then 'Not A Triangle'
        when (A = B) and (A = C) then 'Equilateral'
        when (A != B) and (B != C) and (A != C) then 'Scalene'
        else 'Isosceles'
    end
    from triangles;
