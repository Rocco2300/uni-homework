package entities;

public interface IEntity {
    public String serialize();
    public void deserialize(String line);
    public boolean equals(IEntity other);
    public void printFields();
    public int getId();
    public void setId(int id);
    public String getEntityName();
    public boolean exact(IEntity query);
}
