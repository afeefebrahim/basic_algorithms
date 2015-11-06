class hashtable:
     def __init__(self):
          self.size = 11
          self.slot = [None]*self.size
          self.data = [None]*self.size
     def get(self,key,data):
          hash_value = self.hash_fn(key,self.size)
          if self.slot[hash_value] != None:
                self.data[hash_value] = data
                self.slot [hash_value] = key
          elif self.slot[hash_value] == key:
                     self.data[hash_value] = data
          else :
                new_slot = self.rehash(hash_value,self.size)
                while self.slot[new_slot] != None and self.slot[new_slot] != key :
                       new_slot = self.rehash(new_slot,self.size)
                if self.slot[new_slot] ==None:
                      self.slot[new_slot] = key
                      self.data[new_slot] =  data
                else:
                     self.slot[new_slot] = data      
     

     def hash_fn(self,key,size):
          return key % size
     def rehash(self,old_key,size):
           return (old_key+1) % size
   
     def put(self,key):
           start_slot = self.hash_fn(key,self.size)
           data = None
           stop = False
           found = False
           position = start_slot
           while self.slot[position] != None and not stop and not found:
                if self.slot[position] == key:
                     data = self.data[position] 
                     found = True  
                else:
                      position = self.rehash(position,self.size)
                      if position == start_slot :
                            stop = True
           return data
     
     def  __getitem__(self,get):
           return self.put(key)
     def __setitem__(self,key,data):
           return self.get(key,data)

h = hashtable()
h[54] = "beep"
h[26]="dog"
h[93]="lion"
h[17]="tiger"
h[77]="bird"
h[31]="cow"
h[44]="goat"
h[55]="pig"
h[20]="chicken"
print h.data
print h.slot

