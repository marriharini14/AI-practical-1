room=["D","C","D","D","C"]
def show_room(room):
    picture= ""
    for spot in room:
        if spot == "D":
           picture+=" 💩"
        else:
            picture+="✨"
    print(picture)

print("Our room right now:")
show_room(room)
def clean_spot(spot):
    if spot=="D":
        return "c"
    else:
        return "C"
result= clean_spot("D")
print("the roboat looked at a dirty spot 💩 and made it :", result,"(c means clean ✨)")
print("Before the dirty room:")
def show_room(room):
    print(room)

for i in range (len(room)):
    room[i]=clean_spot(room[i])
    print("After cleaning spot number", i+1,":")
    show_room(room)
print()
print("After all done!")
