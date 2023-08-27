#include"WinAPi/Api.h"

int main()
{
    // Create a standalone window
    StandardWindow window("Window" , 800 , 600);
    
    // Add label (parameters: parent , text , x , y , width , height)
    Label label(window,"Write Something below" , 50 , 15 , 200 , 35);

    // Add text entry (parameters: parent , x , y , width , height)
    TextEntry entry(window,50 , 55 , 200 , 35);

    // Add text button (parameters: parent , text , x , y , width , height)
    TextButton button(window , "Set" , 100 , 90 , 100 , 40);

    // Set the text entry text to the label text when the button is clicked
    button.OnClick = [&label , &entry](TextButton& btn)
    {
        label.ChangeTitle(entry.GetText());
    };
    
    // process the window events
    StandardWindow::MainLoop(&window);
    return 0;
}
