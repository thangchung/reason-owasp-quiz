/* require css file for side effect only */
[@bs.val] external requireCSS : string => unit = "require";

/* require an asset (eg. an image) and return exported string value (image URI) */
[@bs.val] external requireAssetURI : string => string = "require";

[@bs.val] external currentTime : unit => int = "Date.now";

[@bs.send] [@bs.return nullable] external getAttribute : (Js.t('a), string) => option(string) = "getAttribute";

let dangerousHtml : string => Js.t('a) = html => {
  "__html": html
};

[@bs.module] external registerServiceWorker : unit => unit = "src/registerServiceWorker";

let intEl = (n) =>
  n |> string_of_int
    |> ReasonReact.stringToElement;

let textEl = ReasonReact.stringToElement;
let arrayEl = ReasonReact.arrayToElement;
