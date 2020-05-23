<h1> DAY  </h1>
<ul>
  <li> <h4> Append and Delete </h4> </li>
      <p> You have a string of lowercase English alphabetic letters. You can perform two types of operations on the string:

Append a lowercase English alphabetic letter to the end of the string.
Delete the last character in the string. Performing this operation on an empty string results in an empty string.
Given an integer, k, and two strings, s and t, determine whether or not you can convert s to t by performing exactly k of the above operations on s. If it's possible, print Yes. Otherwise, print No.
 </p>

  <li> <h4> Chef of the Year </h4> </li>
        <p> Chefs from all over the globe gather each year for an international convention. Each chef represents some country. Please, note that more than one chef can represent a country.

Each of them presents their best dish to the audience. The audience then sends emails to a secret and secure mail server, with the subject being the name of the chef whom they wish to elect as the "Chef of the Year".

You will be given the list of the subjects of all the emails. Find the country whose chefs got the most number of votes, and also the chef who got elected as the "Chef of the Year" (the chef who got the most number of votes).

Note 1

If several countries got the maximal number of votes, consider the country with the lexicographically smaller name among them to be a winner. Similarly if several chefs got the maximal number of votes, consider the chef with the lexicographically smaller name among them to be a winner.

Note 2

The string A = a1a2...an is called lexicographically smaller then the string B = b1b2...bm in the following two cases:

1. there exists index i ≤ min{n, m} such that aj = bj for 1 ≤ j < i and ai < bi;
2. A is a proper prefix of B, that is, n < m and aj = bj for 1 ≤ j ≤ n.

The characters in strings are compared by their ASCII codes.
 </p>
        
  <li> <h4> Distinct Pairs </h4> </li>
      <p> Chef has two integer sequences A1,A2,…,AN and B1,B2,…,BM. You should choose N+M−1 pairs, each in the form (Ax,By), such that the sums Ax+By are all pairwise distinct.

It is guaranteed that under the given constraints, a solution always exists. If there are multiple solutions, you may find any one.
 </p>

  <li> <h4> Excel Column Number </h4> </li>
        <p>Given a column title as appears in an Excel sheet, return its corresponding column number.
 </p>

  <li> <h4> Excel Column Title </h4> </li>
        <p> Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 </p>
        
  <li> <h4> Fencing </h4> </li>
      <p> There is a field with plants — a grid with N rows (numbered 1 through N) and M columns (numbered 1 through M); out of its NM cells, K cells contain plants, while the rest contain weeds. Two cells are adjacent if they have a common side.

You want to build fences in the field in such a way that the following conditions hold for each cell that contains a plant:

1. it is possible to move from this cell to each adjacent cell containing a plant without crossing any fences
2. it is impossible to move from this cell to any cell containing weeds or to leave the grid without crossing any fences

The fences can only be built between cells or on the boundary of the grid, i.e. on the sides of cells. The total length of the built fences is the number of pairs of side-adjacent cells such that there is a fence built on their common side plus the number of sides of cells on the boundary of the grid which have fences built on them. Find the minimum required total length of fences that need to be built.
</p>

  <li> <h4> Grid Unique Paths </h4> </li>
        <p> A robot is located at the top-left corner of an A x B grid.

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there? </p>
        
  <li> <h4> Prime Sum  </h4> </li>
      <p> Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.
 </p>

  <li> <h4> Save Konoha </h4> </li>
        <p> Pain is the leader of a secret organization whose goal is to destroy the leaf village(Konoha). After successive failures, the leader has himself appeared for the job. Naruto is the head of the village but he is not in a condition to fight so the future of the village depends on the soldiers who have sworn to obey Naruto till death.

Naruto is a strong leader who loves his villagers more than anything but tactics is not his strong area. He is confused whether they should confront Pain or evacuate the villagers including the soldiers (he loves his villagers more than the village). Since you are his advisor and most trusted friend, Naruto wants you to take the decision.

Pain has a strength of Z and is confident that he will succeed. Naruto has N soldiers under his command numbered 1 through N. Power of i-th soldier is denoted by Ai. When a soldier attacks pain, his strength gets reduced by the corresponding power of the soldier. However, every action has a reaction so the power of the soldier also gets halved i.e. Ai changes to [Ai/2]. Each soldier may attack any number of times (including 0). Pain is defeated if his strength is reduced to 0 or less.

Find the minimum number of times the soldiers need to attack so that the village is saved.
</p>
</ul>
