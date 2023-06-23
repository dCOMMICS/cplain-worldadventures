













var label = new Label
{
    AutoSize = true,
    TextAlign = ContentAlignment.MiddleLeft,
    Font = new Font("Courier New", 9F, FontStyle.Regular,
        GraphicsUnit.Point, 238),
    Text = keyword,
    Margin = new Padding(0, 6, 25, 3),
    Padding = new Padding(0, 3, 0, 0)
};

var button = new Button
{
    BackgroundImage = Image.FromFile("../../../Images/cross_200x200.png"),
    BackgroundImageLayout = ImageLayout.Stretch,
    Dock = DockStyle.Right,
    Width = 21,
    Height = 21,
    FlatStyle = FlatStyle.Flat,
};
button.FlatAppearance.BorderSize = 0;