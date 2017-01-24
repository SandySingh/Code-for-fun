print "Enter a name"
name = raw_input()

#Defining all vowels in a list
vowels = ['a', 'e', 'i', 'o', 'u']
name_without_vowels = ''

#Removing the vowels or rather forming a name with only consonants
for i in name:
    if i in vowels:
        continue
    name_without_vowels += i

print "The name without vowels is:"
print name_without_vowels
