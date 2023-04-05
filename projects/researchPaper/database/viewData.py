import pandas as pd
filePath = "kddcup.data"
kdd_data = pd.read_csv(filePath, delimiter=",")
#print(kdd_data)
kdd_data.to_csv("kdd_dada.xlsx", index = None, header = True)
print(kdd_data)
