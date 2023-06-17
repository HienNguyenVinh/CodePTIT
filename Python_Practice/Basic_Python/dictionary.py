# A dictionary is a collection which is unordered*(<3.7), changeable and do not allow duplicates.

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020
#"colors": ["red", "white", "blue"]
}
thisdict["color"] = "green"             #add items
thisdict.update({"color": "red"})

thisdict.pop("model")             #remove item theo key

x = thisdict["model"] = thisdict.get("model")           #lay value theo key
y = thisdict.keys()                         #lay keys
z = thisdict.values()                       #lay values
m = thisdict.values()                       #lay items

#nested dict
myfamily = {
  "child1" : {
    "name" : "Emil",
    "year" : 2004
  },
  "child2" : {
    "name" : "Tobias",
    "year" : 2007
  },
  "child3" : {
    "name" : "Linus",
    "year" : 2011
  }
}
print(myfamily["child2"]["name"])