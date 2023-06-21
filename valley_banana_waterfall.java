public class EducationPursuit {
  
  // Class properties
  private String field;
  private int minYears;
  private ArrayList<String> skills;
  private double cost;
  
  // Constructor
  public EducationPursuit(String field, int minYears, ArrayList<String> skills, double cost) {
    this.field = field;
    this.minYears = minYears;
    this.skills = skills;
    this.cost = cost;
  }
  
  // Getters and setters
  public String getField() {
    return this.field;
  }
  
  public void setField(String field) {
    this.field = field;
  }
  
  public int getMinYears() {
    return this.minYears;
  }
  
  public void setMinYears(int minYears) {
    this.minYears = minYears;
  }
  
  public ArrayList<String> getSkills() {
    return this.skills;
  }
  
  public void setSkills(ArrayList<String> skills) {
    this.skills = skills;
  }
  
  public double getCost() {
    return this.cost;
  }
  
  public void setCost(double cost) {
    this.cost = cost;
  }
  
  // Helper methods
  public void calculateCost() {
    this.cost = this.minYears * 1000;
  }
  
  public void addRequiredSkill(String skill) {
    if (!this.skills.contains(skill)) {
      this.skills.add(skill);
    }
  }
  
  public void removeRequiredSkill(String skill) {
    if (this.skills.contains(skill)) {
      this.skills.remove(skill);
    }
  }
  
  // Class methods
  public static List<EducationPursuit> createDefaultPursuitList() {
    List<EducationPursuit> pursuits = new ArrayList<>();
    pursuits.add(new EducationPursuit("Computer Science", 4, Arrays.asList("Programming", "Data Structures", "Algorithms"), 0.0));
    pursuits.add(new EducationPursuit("Business", 2, Arrays.asList("Accounting", "Finance", "Marketing"), 0.0));
    pursuits.add(new EducationPursuit("Engineering", 4, Arrays.asList("Calculus", "Physics", "Chemistry"), 0.0));
    return pursuits;
  }
  
  public String toString() {
    return this.field + ": Requires " + this.minYears + " years of study and knowledge of " + this.skills.toString() + ".";
  }
  
  public static void main(String[] args) {
    List<EducationPursuit> pursuits = createDefaultPursuitList();
    for (EducationPursuit pursuit : pursuits) {
      System.out.println(pursuit);
    }
  }
  
}