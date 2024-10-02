class person {
    constructor(name,age,sex){
        this.name=name
        this.age=age
        this.sex=sex
    }

    printInfo(){
        console.log(this.name+" "+this.age+" "+this.sex)
    }
}

const T=new person("Tushar Sarkar",24,"Male")
const B=new person("Biswadeep Sarkar",26,"Male")
