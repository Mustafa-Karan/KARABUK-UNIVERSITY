public enum Branch {
    MATH("Information Regarding Math"),
    PHYSICS("Information Regarding Physics"),
    CS("Information Regarding Cs"),
    ENG("Information Regarding Eng");
    private String description;//to describe enum types
    Branch(String description){//user defines MATH for example this is a constructor
        this.description=description;
    }
}