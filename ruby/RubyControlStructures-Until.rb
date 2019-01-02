=begin

Problem link = https://www.hackerrank.com/challenges/ruby-until/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
This challenge has a beautiful one-liner answer.

"A hacker practices on HackerRank until getting to a rating of O(1) read as (Oh-one)"

Call the method coder.practice until coder.oh_one? becomes true.

Use the until control structure.

until is the logical equivalent of while not.

Hint

while not <condition>
    <code>
end

or

until <condition>
    <code>
end

or the beautiful one-liner

<code> until <condition>  

=end

coder.practice until coder.oh_one? == true
=begin

while not coder.oh_one? == true
    coder.practice
end
=end
