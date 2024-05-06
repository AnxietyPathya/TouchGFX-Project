#ifndef TGFXKEYBOARD_HPP_
#define TGFXKEYBOARD_HPP_

#include <touchgfx/widgets/Keyboard.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <gui/common/KeyboardLayout.hpp>
#include <fonts/ApplicationFontProvider.hpp>
#include <gui/common/KeyboardKeyMapping.hpp>
#include <gui/common/FrontendApplication.hpp>
#include <gui/adminsetupscreen_screen/AdminSetupScreenView.hpp>
using namespace touchgfx;


// @jangho
// const int BASE_CODE = 0xAC00; // '가'
// const int BASE_INIT = 0x3131; // 'ㄱ'
// const int BASE_VOWEL = 0x314F; // 'ㅏ'


/**
 * An alphanumeric keyboard with backspace, space-bar and delete functionality.
 * Keyboard mappings for the keyboard are defined in gui/include/gui/common/KeyboardKeyMapping.hpp.
 * Keyboard layout for the keyboard is defined in gui/include/gui/common/KeyboardLayout.hpp.
 * Please note that the ApplicationFontProvider is initialized and set with the FontManager in main.cpp
 * The fonts and the characters used by the keyboard have to be defined in the assets/texts/texts.xlsx file.
 */
class CustomKeyboard : public Container
{
public:
    CustomKeyboard();
    virtual ~CustomKeyboard() { }

    /*
     * Override setTouchable to also affect the keyboard object inside this
     * CustomKeyboard.
     */
    void setTouchable(bool touch);

    Unicode::UnicodeChar* getBuffer(); // add
    void updateBufferProc(Unicode::UnicodeChar* input);
    bool isCloseKeyboard();
    void setCloseKeyboard(bool onoff);

    bool is_close = false;
private:
    /*
     * The size of the buffer that is used by the keyboard.
     * The size determines how much text the keyboard can contain in its textfield.
     */
    static const uint8_t BUFFER_SIZE = 30; //18;

    /**
     * The keyboard which this CustomKeyboard wraps.
     */
    Keyboard keyboard;

    /**
     * The buffer used by the keyboard for text input.
     */
    Unicode::UnicodeChar buffer[BUFFER_SIZE];

    /**
     * Used to display text on top of the button for changing keyboard mode.
     */
    TextArea modeBtnTextArea;

    TextArea enterBtnTextArea;

    /**
     * Callback for the capslock button.
     */
    Callback<CustomKeyboard> capslockPressed;

    /**
     * Callback for the backspace button.
     */
    Callback<CustomKeyboard> backspacePressed;

    /**
     * Callback for the keyboard mode button.
     */
    Callback<CustomKeyboard> modePressed;

    /**
     * Callback for the keyboard enter button.
     */
    Callback<CustomKeyboard> enterPressed;

    /**
     * Callback for when keys are pressed on the keyboard.
     */
    Callback<CustomKeyboard, Unicode::UnicodeChar> keyPressed;

    /**
     * True if the keyboard should show alpha keys, false for numeric.
     */
    bool alphaKeys;

    uint8_t keyMode;

    /**
     * True if the keyboard should show upper-case keys.
     */
    bool uppercaseKeys;

    /**
     * True if the input position in the text field, and hence the buffer, is at the beginning.
     */
    bool firstCharacterEntry;

    /*
     * Sets the correct key mappings of the keyboard according to alpha/numeric and upper-case/lower-case.
     */
    void setKeyMappingList();

    /**
     * Callback handler for the backspace button.
     */
    void backspacePressedHandler();

    /**
     * Callback handler for the caps-lock button.
     */
    void capslockPressedHandler();

    /**
     * Callback handler for the mode button.
     */
    void modePressedHandler();

    /**
     * Callback handler for the enter button.
     */
    void enterPressedHandler();

    /**
     * Callback handler for key presses.
     * @param keyChar The UnicodeChar for the key that was pressed.
     */
    void keyPressedhandler(Unicode::UnicodeChar keyChar);

    int getInitIdx(Unicode::UnicodeChar keyChar);
    int getVowelIdx(Unicode::UnicodeChar keyChar);   
    int getFinalIdx(Unicode::UnicodeChar keyChar);
    bool makeHangul(Unicode::UnicodeChar keyChar);
    bool getJongCombineChar(Unicode::UnicodeChar  left,
                            Unicode::UnicodeChar  right,
                            Unicode::UnicodeChar &combine);
    bool getJungCombineChar(Unicode::UnicodeChar  left,
                            Unicode::UnicodeChar  right,
                            Unicode::UnicodeChar &combine);
    bool makeHangulBlock(Unicode::UnicodeChar keyChar);
    Unicode::UnicodeChar combineHangul (Unicode::UnicodeChar cho, Unicode::UnicodeChar jung, Unicode::UnicodeChar jong);
};

#endif /* TGFXKEYBOARD_HPP_ */
