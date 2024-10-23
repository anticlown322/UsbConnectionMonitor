#ifndef MY_APP_CLASS
#define MY_APP_CLASS

#include "myCircleButton.h"

class MyApp
{
public:
    /* funcs */
    explicit MyApp();
    ~MyApp();
    int Run();

    /* static funcs */
    static LRESULT CALLBACK AppProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

    /* static fields */
    static constexpr const wchar_t* appName = L"File Sorter";
    static constexpr const wchar_t* className = L"MyAppWindowClass";

private:
    /* funcs */
    LRESULT CALLBACK WndProc(UINT message, WPARAM wParam, LPARAM lParam);

    void    InitWindow();
    void    CreateControls();
    void    DiscradControls();
    HRESULT CreateGraphicsResources();
    void    DiscardGraphicsResources();
    void    OnPaint();
    void    Resize();

    /* static funcs */

    /* fields */
    HWND handler;

    ID2D1Factory* pFactory;
    ID2D1HwndRenderTarget* pRenderTarget;
    ID2D1LinearGradientBrush* pBackgroudnGradientBrush;
    ID2D1LinearGradientBrush* pWindowBorderBrush;

    MyCircleButton* closeButton;
    MyCircleButton* minimizeButton;

    /* static fields */
    static const int startWindowWidth = 800;
    static const int startWindowHeight = 600;

    static const int TOP_MENU_BTN_RADIUS = 20;
};

#endif // MY_APP_CLASS

