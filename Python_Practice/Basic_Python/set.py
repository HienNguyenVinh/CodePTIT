# A set is a collection which is unordered, unchangeable*, and unindexed.
# But u can add/remove items

thisset = {"apple", "banana", "cherry"}
print(type(thisset))
thisset.add("orange")
print(thisset)

tropical = ["pineapple", "mango", "papaya"]
thisset.update(tropical)
a = thisset.union(tropical)

b = thisset.intersection(tropical)      #giao 2 set
c = thisset.symmetric_difference(tropical)          #cac phan tu tru giao cua 2 set

thisset.remove("banana")            #If the item to remove does not exist, remove() will raise an error.
thisset.discard("banana")

'''- difference()	   Returns a set containing the difference between two or more sets
- isdisjoint()	Returns whether two sets have a intersection or not
- issubset()	Returns whether another set contains this set or not
- issuperset()	Returns whether this set contains another set or not
'''